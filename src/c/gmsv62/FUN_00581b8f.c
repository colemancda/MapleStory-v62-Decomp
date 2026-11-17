/* FUN_00581b8f - 0x00581b8f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00581b8f(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_28;
  int iStack_24;
  
  FUN_00879bb8();
  iStack_24 = 0x581ba6;
  iVar1 = FUN_005828c5();
  if (iVar1 != 0) {
    iVar1 = *(int *)(unaff_EBP + 8);
    if (iVar1 == 1000) {
      iStack_24 = 0x581c97;
      FUN_00414f29();
      puStack_28 = (undefined1 *)&iStack_24;
      *(int **)(unaff_EBP + -0x10) = &iStack_24;
      FUN_0048b998();
      FUN_0045b90e();
      puStack_28 = (undefined1 *)0x581cb8;
      FUN_00566b73();
    }
    else if (iVar1 == 0x3e9) {
      iStack_24 = unaff_EBP + 8;
      puStack_28 = (undefined1 *)0x581be2;
      FUN_0045b90e();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      puStack_28 = (undefined1 *)0x581bf4;
      iStack_24 = extraout_ECX + 0x88;
      iVar1 = FUN_0045ec92();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_24 = 0x581c07;
      FUN_00414ebb();
      if (iVar1 == 0) {
        iStack_24 = 0;
        puStack_28 = (undefined1 *)0xc;
        FUN_0057a453();
      }
      else {
        iStack_24 = *(int *)(extraout_ECX + 0x9c);
        puStack_28 = (undefined1 *)(extraout_ECX + 0x94);
        uVar2 = FUN_00413367();
        uVar3 = *(undefined4 *)(extraout_ECX + 0xa8);
        *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
        uVar2 = FUN_00413367(extraout_ECX + 0xa0,uVar3);
        uVar3 = *(undefined4 *)(extraout_ECX + 0xb4);
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
        uVar2 = FUN_00413367(extraout_ECX + 0xac,uVar3);
        uVar3 = *(undefined4 *)(extraout_ECX + 0xc0);
        *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
        uVar3 = FUN_00413367(extraout_ECX + 0xb8,uVar3);
        *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
        iStack_24 = unaff_EBP + -0x20;
        *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_28;
        FUN_00450368(extraout_ECX + 0x88);
        FUN_00566a24();
      }
    }
    else if (iVar1 == 0x3ea) {
      iStack_24 = 0x581bce;
      FUN_005659b4();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


