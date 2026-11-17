/* FUN_0052dfe5 - 0x0052dfe5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0052dfe5(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 4))();
    if (iVar1 == 0) {
      uVar2 = FUN_0045e2eb();
      iVar1 = FUN_0055443a(uVar2);
      if (iVar1 == 0) {
        uVar2 = FUN_0045e2eb();
        iVar1 = FUN_0055416a(uVar2);
        if (iVar1 != 0) goto LAB_0052e0c3;
        uVar2 = FUN_0045e2eb();
        iVar1 = FUN_005540b6(uVar2);
        if (iVar1 != 0) goto LAB_0052e0c3;
        iVar1 = *(int *)(unaff_EBP + 0xc);
        if (*(int *)(iVar1 + 0x18) == 0 && *(int *)(iVar1 + 0x1c) == 0) {
          iVar1 = (*DAT_0097b4ac)(iVar1 + 0x20,&DAT_008eb5a8);
          if (-1 < iVar1) {
            uVar2 = FUN_0045e2eb();
            iVar1 = FUN_005542d2(uVar2);
            if (iVar1 == 0) {
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              if (*(int *)(unaff_EBP + 0xc) != 0) {
                FUN_00449913(0);
              }
              uVar2 = 0;
              goto LAB_0052e0da;
            }
            goto LAB_0052e0a4;
          }
          goto LAB_0052e0c3;
        }
      }
      else {
LAB_0052e0c3:
        iVar1 = *(int *)(unaff_EBP + 0xc);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
LAB_0052e0a4:
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar1 = *(int *)(unaff_EBP + 0xc);
    }
    if (iVar1 != 0) {
      FUN_00449913(0);
    }
  }
  uVar2 = 1;
LAB_0052e0da:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


