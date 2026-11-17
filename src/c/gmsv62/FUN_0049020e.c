/* FUN_0049020e - 0x0049020e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0049020e(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  char *pcStack_44;
  int iStack_40;
  
  FUN_00879bb8();
  iStack_40 = 0x49022b;
  FUN_0074d6fb();
  iStack_40 = 0x49023c;
  FUN_00486745();
  if (*(int *)(unaff_EBP + 8) == 0x203) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(int *)(unaff_EBP + -0x10) = extraout_ECX + 0x16c;
    do {
      iStack_40 = *(undefined4 *)(unaff_EBP + 8);
      pcStack_44 = (char *)(unaff_EBP + -0x3c);
      FUN_004927e9();
      iStack_40 = *(undefined4 *)(unaff_EBP + 0x14);
      pcStack_44 = *(char **)(unaff_EBP + 0x10);
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x3c) + 5;
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x3c) + 0x45;
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x38) + 5;
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x38) + 0x45;
      iVar1 = (*DAT_0097b57c)(unaff_EBP + -0x2c);
      if ((iVar1 != 0) && (iStack_40 = **(int **)(unaff_EBP + -0x10), -1 < iStack_40)) {
        pcStack_44 = (char *)(unaff_EBP + -0x1c);
        FUN_004903a3();
        iStack_40 = *(int *)(unaff_EBP + -0x18);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iStack_40 == 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar1 = 0;
        }
        else {
          *(char ***)(unaff_EBP + -0x14) = &pcStack_44;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x18) + 4));
          }
          FUN_00494487();
          iStack_40 = 0;
          *(undefined4 *)(extraout_ECX + 0x164) = *(undefined4 *)(unaff_EBP + 8);
          pcStack_44 = (char *)0x490300;
          FUN_008161f1();
          iStack_40 = 0x49030b;
          iVar1 = FUN_0045e2eb();
          if (((iVar1 == 0x1bf440) &&
              (iVar1 = *(int *)(*(int *)(DAT_00979114 + 0x1744) + 4), iVar1 != 0)) &&
             (*(int *)(*(int *)(iVar1 + 0x78) + 0x14) != 0)) {
            iStack_40 = 0xffffffff;
            pcStack_44 = s_Pet_Quote_Ring_00964d28;
            *(undefined4 *)(unaff_EBP + 8) = 0;
            FUN_00414edd();
            iStack_40 = unaff_EBP + 8;
            *(undefined1 *)(unaff_EBP + -4) = 1;
            pcStack_44 = (char *)0x490375;
            FUN_00615619();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            iStack_40 = 0x490380;
            FUN_00414ebb();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int *)(unaff_EBP + -0x18) != 0) {
              iStack_40 = 0;
              pcStack_44 = (char *)0x490392;
              FUN_0045e794();
            }
            break;
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar1 = *(int *)(unaff_EBP + -0x18);
        }
        if (iVar1 != 0) {
          iStack_40 = 0;
          pcStack_44 = (char *)0x49033e;
          FUN_0045e794();
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
    } while (*(int *)(unaff_EBP + 8) < 10);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


