/* FUN_0083a97e - 0x0083a97e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083a97e(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 0xc) / 10000;
  if ((iVar1 == 0x221) || (iVar1 == 0xef)) {
    iVar1 = FUN_004becbc(200,0);
    if (iVar1 != 0) {
      iVar1 = FUN_00429303();
      uVar2 = *(uint *)(iVar1 + 0x108) >> 0x12 & 1;
      *(uint *)(unaff_EBP + -0x10) = uVar2;
      if (uVar2 == 0) {
        if (DAT_00979178 == 0) {
          FUN_0060142b(0x66,0,0);
          *(undefined4 *)(unaff_EBP + -4) = 2;
          FUN_0045d247(*(undefined4 *)(unaff_EBP + 8));
          FUN_00457d37(*(undefined4 *)(unaff_EBP + 0xc));
          FUN_004751b2(unaff_EBP + -0x20);
          *(undefined4 *)(extraout_ECX + 0x208c) = 1;
          uVar3 = FUN_007d1e08();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(undefined4 *)(extraout_ECX + 0x2090) = uVar3;
          FUN_0045ebca();
          goto LAB_0083aa90;
        }
        uVar3 = FUN_00679d22(unaff_EBP + 8,0x9a);
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_00471102(uVar3,0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        uVar3 = FUN_00679d22(unaff_EBP + 0xc,0x121);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_00471102(uVar3,0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      FUN_00414ebb();
    }
  }
LAB_0083aa90:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


