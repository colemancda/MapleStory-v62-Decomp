/* FUN_00834c99 - 0x00834c99 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00834c99(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_00429303();
  uVar2 = *(uint *)(iVar1 + 0x108) >> 10 & 1;
  *(uint *)(unaff_EBP + -0x10) = uVar2;
  if (uVar2 == 0) {
    iVar1 = FUN_0083ae79(*(undefined4 *)(unaff_EBP + 0x14));
    if (iVar1 != 0) {
      iVar1 = FUN_004becbc(200,0);
      if (iVar1 != 0) {
        FUN_0060142b(0x90,0,0);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_00457fa0(unaff_EBP + 8,8);
        FUN_00457cda(*(undefined4 *)(unaff_EBP + 0x1c));
        uVar3 = FUN_007d1e08();
        FUN_00457d37(uVar3);
        FUN_0045d247(*(undefined4 *)(unaff_EBP + 0x10));
        FUN_00457d37(*(undefined4 *)(unaff_EBP + 0x14));
        FUN_004751b2(unaff_EBP + -0x20);
        *(undefined4 *)(extraout_ECX + 0x208c) = 1;
        uVar4 = FUN_007d1e08();
        uVar3 = *(undefined4 *)(unaff_EBP + 0x14);
        *(undefined4 *)(extraout_ECX + 0x2090) = uVar4;
        FUN_007d3d3e(uVar3,0x1d);
        if (*(int *)(unaff_EBP + 0x18) != 0) {
          *(undefined4 *)(DAT_00978358 + 0x1e60) = 0;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_0045ebca();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


