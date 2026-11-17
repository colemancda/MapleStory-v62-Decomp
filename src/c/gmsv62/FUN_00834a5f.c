/* FUN_00834a5f - 0x00834a5f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00834a5f(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  if ((DAT_00978354 != 0) && (*(int *)(DAT_00978354 + 0xc) != 0)) {
    FUN_00598d62();
  }
  iVar1 = FUN_00429303();
  uVar2 = *(uint *)(iVar1 + 0x108) >> 10 & 1;
  *(uint *)(unaff_EBP + -0x10) = uVar2;
  if (uVar2 == 0) {
    (**(code **)(*DAT_00978358 + 4))();
    iVar1 = FUN_004bf0d4();
    if (iVar1 == 0) {
      iVar1 = *(int *)(unaff_EBP + 0xc) / 10000;
      *(int *)(unaff_EBP + -0x10) = iVar1;
      if (((((iVar1 != 0xdd) && (iVar1 != 0xec)) ||
           ((DAT_00978358[0x13f] / 10000 != 0xc1 &&
            ((iVar1 = FUN_004cd670(DAT_00978358 + 0x7bc,DAT_00978358[0x7be]), iVar1 == 0 &&
             (DAT_00979178 == 0)))))) &&
          ((*(int *)(unaff_EBP + -0x10) != 0xec ||
           ((DAT_00978358[0x14a] < 1 && (DAT_00978358[0x138] == 0)))))) &&
         (((DAT_00978358[0x138] == 0 && (DAT_00978358[0x13d] == 0)) ||
          ((*(int *)(unaff_EBP + -0x10) != 0xdd && (*(int *)(unaff_EBP + -0x10) != 0xec)))))) {
        iVar1 = *(int *)(unaff_EBP + -0x14);
        iVar4 = FUN_0083ae79(*(undefined4 *)(unaff_EBP + 0xc));
        if ((iVar4 != 0) &&
           (((iVar4 = FUN_007a3f46(), iVar4 == 0 && (DAT_00978358[0x915] == 0)) &&
            (iVar4 = FUN_004becbc(200,0), iVar4 != 0)))) {
          FUN_0060142b(0x43,0,0);
          *(undefined4 *)(unaff_EBP + -4) = 2;
          uVar3 = FUN_007d1e08();
          FUN_00457d37(uVar3);
          FUN_0045d247(*(undefined4 *)(unaff_EBP + 8));
          FUN_00457d37(*(undefined4 *)(unaff_EBP + 0xc));
          FUN_004751b2(unaff_EBP + -0x24);
          *(undefined4 *)(iVar1 + 0x208c) = 1;
          uVar5 = FUN_007d1e08();
          uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(iVar1 + 0x2090) = uVar5;
          FUN_007d3d3e(uVar3,0x1d);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_0045ebca();
        }
      }
      goto LAB_00834c88;
    }
    uVar3 = FUN_00679d22(unaff_EBP + 8,0xe9e);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00471102(uVar3,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = *(int *)(unaff_EBP + 8);
  }
  else {
    uVar3 = FUN_00679d22(unaff_EBP + 0xc,0xfa6);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar3,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = *(int *)(unaff_EBP + 0xc);
  }
  if (iVar1 != 0) {
    FUN_00434e38(iVar1 + -0xc);
  }
LAB_00834c88:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


