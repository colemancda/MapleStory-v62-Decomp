/* FUN_0075135d - 0x0075135d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0075135d(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  int iStack_28;
  int *piStack_24;
  
  FUN_00879bb8();
  piStack_24 = (int *)0x751375;
  FUN_00414f29();
  iVar1 = *(int *)(unaff_EBP + 8);
  if ((*(int *)(iVar1 + 0x59) != 0 || *(int *)(iVar1 + 0x5d) != 0) ||
     (*(int *)(unaff_EBP + 0xc) != 0)) {
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      piStack_24 = (int *)&DAT_008f1068;
      iStack_28 = iVar1 + 0x59;
      iVar2 = (*DAT_0097b4ac)();
      if (iVar2 == 0) {
        uVar3 = FUN_00679d22(unaff_EBP + 0xc,0x2ae);
        *(undefined4 *)(unaff_EBP + -4) = 4;
        FUN_00414f8b(uVar3);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        (*DAT_0097b4b0)(iVar1 + 0x59,unaff_EBP + -0x20);
        puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x2af);
        uVar3 = *puVar4;
        *(undefined4 *)(unaff_EBP + -4) = 5;
        FUN_00434e21(*(undefined4 *)(unaff_EBP + 0x10),uVar3,*(undefined2 *)(unaff_EBP + -0x1e),
                     *(undefined2 *)(unaff_EBP + -0x1a),*(undefined2 *)(unaff_EBP + -0x20),
                     *(undefined2 *)(unaff_EBP + -0x18));
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      FUN_00414ebb();
    }
    else {
      piStack_24 = (int *)0x7513a6;
      piStack_24 = (int *)FUN_0045e2eb();
      iStack_28 = unaff_EBP + 0xc;
      FUN_004497f5();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        piStack_24 = (int *)0x0;
        *(int **)(unaff_EBP + -0x10) = &iStack_28;
        FUN_00679e4e(&iStack_28,0x758);
        iVar1 = unaff_EBP + -0x20;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0040263d(iVar1);
        iVar1 = FUN_004048a4(iVar1);
        iStack_28 = 0x2ad;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00679d22(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_28 = iVar1;
        piStack_24 = (int *)FUN_00412550();
        iStack_28 = 0x751419;
        iStack_28 = FUN_00449713();
        FUN_00434e21(*(undefined4 *)(unaff_EBP + 0x10));
        *(undefined1 *)(unaff_EBP + -4) = 2;
        piStack_24 = (int *)0x751431;
        FUN_00414ebb();
        piStack_24 = (int *)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_28 = 0x75143d;
        piStack_24 = (int *)FUN_00402bc3();
        if ((int)piStack_24 < 0) {
          iStack_28 = 0x751448;
          FUN_00878dfb();
        }
        piStack_24 = *(int **)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piStack_24 != (int *)0x0) {
          iStack_28 = 0x75145d;
          (**(code **)(*piStack_24 + 8))();
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


