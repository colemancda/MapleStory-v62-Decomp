/* FUN_00624903 - 0x00624903 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00624903(void)

{
  int iVar1;
  int unaff_EBP;
  int iStack_40;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045f10c();
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_004027eb();
  }
  else {
    iStack_40 = 0x62493b;
    FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_40 = 0x624948;
    FUN_004035f5();
    FUN_004027b3();
    iStack_40 = 0x62495a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    *(undefined1 *)(unaff_EBP + -4) = 4;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        iStack_40 = 0x624970;
        FUN_00878dfb();
      }
      iStack_40 = unaff_EBP + -0x30;
      iVar1 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0xc))(*(int **)(unaff_EBP + -0x14),1);
      if (iVar1 != 0) break;
      *(int **)(unaff_EBP + -0x20) = &iStack_40;
      FUN_004033a1(*(undefined4 *)(unaff_EBP + -0x28));
      iVar1 = unaff_EBP + -0x40;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_0040263d(iVar1);
      iStack_40 = FUN_004048a4(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_40 = FUN_004343c5();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      FUN_00454081();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_40 = 0x6249dc;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_40 = 0x6249e7;
        FUN_00878dfb();
      }
      if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0')
         ) {
        iStack_40 = -1;
        FUN_004655d4();
        iStack_40 = 0x624a07;
        FUN_00414f8b();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      iStack_40 = 0x624a1c;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_40 = 0x624a2b;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_40 = 0x624a3d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_40 = 0x624a48;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_40 = 0x624a58;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      iStack_40 = 0x624a69;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


