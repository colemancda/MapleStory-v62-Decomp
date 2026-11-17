/* FUN_007afd71 - 0x007afd71 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007afd71(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 0xc) == 0) goto LAB_007afe8a;
  iVar3 = *(int *)(unaff_EBP + 8);
  iVar1 = *(int *)(iVar3 + 0x3f7);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + -4);
  }
  iVar1 = iVar1 + -1;
  if (iVar1 < 1) {
LAB_007afdfe:
    iVar3 = *(int *)(iVar3 + 0x3f3);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + -4);
    }
    iVar3 = iVar3 + -1;
    if (0 < iVar3) {
      do {
        FUN_00458c4f(unaff_EBP + -0x14,4,iVar3);
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if ((*(int *)(unaff_EBP + -0x10) != 0) &&
           (iVar1 = FUN_0045e2eb(), iVar1 == *(int *)(unaff_EBP + 0xc))) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            FUN_00449913(0);
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
          }
          break;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          FUN_00449913(0);
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
        }
        iVar3 = iVar3 + -1;
      } while (0 < iVar3);
      if (0 < iVar3) goto LAB_007afe77;
    }
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
  }
  else {
    do {
      FUN_00458c4f(unaff_EBP + -0x1c,5,iVar1);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((*(int *)(unaff_EBP + -0x18) != 0) &&
         (iVar2 = FUN_0045e2eb(), iVar2 == *(int *)(unaff_EBP + 0xc))) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          FUN_00449913(0);
        }
        break;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_00449913(0);
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      iVar1 = iVar1 + -1;
    } while (0 < iVar1);
    if (iVar1 < 1) goto LAB_007afdfe;
  }
LAB_007afe77:
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_0084951d(0);
  }
LAB_007afe8a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


