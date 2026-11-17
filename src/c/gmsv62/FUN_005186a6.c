/* FUN_005186a6 - 0x005186a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x005187b8) */
/* WARNING: Removing unreachable block (ram,0x005187ec) */

undefined4 FUN_005186a6(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_004027eb();
LAB_005188bc:
    uVar2 = 0;
  }
  else {
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd0;
    FUN_00448a17(s_jobCategory_009651cc);
    iVar1 = unaff_EBP + -0x30;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d(iVar1);
    FUN_004048a4(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004343c5();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0'))
    {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      FUN_00518a43();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_004a3109();
      if (iVar1 == 0) {
        *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 1;
      }
      else {
        iVar1 = FUN_004a3109();
        if (iVar1 == 0) {
          *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 2;
        }
        else {
          iVar1 = FUN_004a3109();
          if (iVar1 == 0) {
            *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 3;
          }
          else {
            pcVar3 = DAT_00980dfc;
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              pcVar3 = *(char **)(unaff_EBP + -0x10);
            }
            iVar1 = _strcmp(pcVar3,s_theif_009651b4);
            if (iVar1 == 0) {
              *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 4;
            }
            else {
              pcVar3 = DAT_00980dfc;
              if (*(int *)(unaff_EBP + -0x10) != 0) {
                pcVar3 = *(char **)(unaff_EBP + -0x10);
              }
              iVar1 = _strcmp(pcVar3,s_pirate_009651ac);
              if (iVar1 != 0) {
                *(undefined1 *)(unaff_EBP + -4) = 4;
                if (*(int *)(unaff_EBP + -0x14) != 0) {
                  FUN_00518b00();
                  *(undefined4 *)(unaff_EBP + -0x14) = 0;
                }
                *(undefined1 *)(unaff_EBP + -4) = 0;
                FUN_00414ebb();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
                  (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
                }
                goto LAB_005188bc;
              }
              *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 5;
            }
          }
        }
      }
      iVar1 = *(int *)(unaff_EBP + -0x14);
      *(int *)(unaff_EBP + -0x1c) = iVar1;
      if (iVar1 != 0) {
        InterlockedIncrement((LONG *)(iVar1 + 4));
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00518a2a();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_004f192c();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_00518b00();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
    uVar2 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


