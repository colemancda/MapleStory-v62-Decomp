/* FUN_0050d629 - 0x0050d629 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0050d629(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = 0;
  if (DAT_00978358 != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puVar2 = (undefined4 *)FUN_004f1aaa(0xffffffff);
    *puVar2 = *(undefined4 *)(extraout_ECX + 0x74c);
    puVar2[1] = *(undefined4 *)(extraout_ECX + 0x750);
    puVar2[2] = *(undefined4 *)(extraout_ECX + 0x754);
    puVar2[3] = *(undefined4 *)(extraout_ECX + 0x758);
    puVar2 = (undefined4 *)FUN_004f1aaa(0xffffffff);
    *puVar2 = *(undefined4 *)(extraout_ECX + 0x784);
    puVar2[1] = *(undefined4 *)(extraout_ECX + 0x788);
    puVar2[2] = *(undefined4 *)(extraout_ECX + 0x78c);
    puVar2[3] = *(undefined4 *)(extraout_ECX + 0x790);
    puVar2 = (undefined4 *)FUN_004f1aaa(0xffffffff);
    *puVar2 = *(undefined4 *)(extraout_ECX + 0x7ac);
    puVar2[1] = *(undefined4 *)(extraout_ECX + 0x7b0);
    puVar2[2] = *(undefined4 *)(extraout_ECX + 0x7b4);
    puVar2[3] = *(undefined4 *)(extraout_ECX + 0x7b8);
    puVar2 = (undefined4 *)FUN_004f1aaa(0xffffffff);
    *puVar2 = *(undefined4 *)(extraout_ECX + 0x7d4);
    puVar2[1] = *(undefined4 *)(extraout_ECX + 0x7d8);
    puVar2[2] = *(undefined4 *)(extraout_ECX + 0x7dc);
    puVar2[3] = *(undefined4 *)(extraout_ECX + 0x7e0);
    iVar3 = FUN_007ac60d(unaff_EBP + -0x10,unaff_EBP + -0x14,0);
    if ((-1 < iVar3) && (*(int *)(extraout_ECX + 0x728) == 1)) {
      if (iVar3 < 2) {
        uVar1 = *(undefined4 *)(extraout_ECX + 0x7ec);
      }
      else {
        uVar4 = FUN_004133f0();
        if (uVar4 % 100 < 0x14) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(extraout_ECX + 0x7f0 + (uint)(0x59 < uVar4 % 100) * 4);
        }
      }
      FUN_0060142b(0xb2,0,0);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00457cda(iVar3);
      FUN_0045d247(uVar1);
      FUN_0045d247(*(undefined4 *)(unaff_EBP + -0x14));
      FUN_004751b2(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0045ebca();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004f1a88();
    uVar1 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


