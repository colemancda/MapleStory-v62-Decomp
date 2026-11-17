/* FUN_00638a8e - 0x00638a8e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00638a8e(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int iVar4;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    uVar1 = 0;
  }
  else {
    iVar4 = 0;
    while( true ) {
      piStack_3c = (int *)0x638ab9;
      FUN_0087a1b0();
      piStack_3c = (int *)0x0;
      uStack_40 = 0;
      puStack_44 = &stack0xffffffc8;
      uVar1 = FUN_00412335(iVar4);
      *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_44;
      FUN_004033a1(uVar1);
      iVar2 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_44 = (undefined1 *)0x638af1;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x14) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar2 != 0) {
        piStack_3c = (int *)(unaff_EBP + -0x14);
        uStack_40 = 0x638b07;
        piStack_3c = (int *)FUN_00404b30();
        if (((int)piStack_3c < 0) && (piStack_3c != (int *)0x80004002)) {
          uStack_40 = 0x638b18;
          FUN_00878dfb();
        }
      }
      piStack_3c = (int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uStack_40 = 0x638b25;
      piStack_3c = (int *)FUN_00402bc3();
      if ((int)piStack_3c < 0) {
        uStack_40 = 0x638b30;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      piStack_3c = (int *)0xffffffff;
      uStack_40 = 0x638b3f;
      puVar3 = (undefined4 *)FUN_0045f1e3();
      piStack_3c = (int *)0xffffffff;
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_40;
      puStack_44 = (undefined1 *)0x5ed;
      FUN_00679e4e(&uStack_40);
      puStack_44 = (undefined1 *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_0040263d();
      uStack_40 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puStack_44 = (undefined1 *)0x638b7a;
      uVar1 = FUN_00412550();
      *puVar3 = uVar1;
      puStack_44 = (undefined1 *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_3c = (int *)FUN_00402bc3();
      if ((int)piStack_3c < 0) {
        uStack_40 = 0x638b96;
        FUN_00878dfb();
      }
      piStack_3c = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_3c != (int *)0x0) {
        uStack_40 = 0x638ba6;
        (**(code **)(*piStack_3c + 8))();
      }
      iVar4 = iVar4 + 1;
    }
    piStack_3c = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_3c != (int *)0x0) {
      uStack_40 = 0x638bbd;
      (**(code **)(*piStack_3c + 8))();
    }
    uVar1 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


