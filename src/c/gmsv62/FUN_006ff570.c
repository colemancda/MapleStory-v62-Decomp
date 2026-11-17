/* FUN_006ff570 - 0x006ff570 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006ff570(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_44;
  int *piStack_40;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_40 = (int *)0x6ff59a;
  FUN_0087a1b0();
  piStack_40 = (int *)&DAT_0097812c;
  puStack_44 = &stack0xffffffc4;
  uVar2 = FUN_00412335(*(undefined4 *)(unaff_EBP + 0xc));
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_44;
  FUN_004033a1(uVar2);
  iVar3 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d(iVar3);
  puStack_44 = (undefined1 *)FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_44 = (undefined1 *)FUN_004343c5();
  piStack_40 = (int *)0xffffffff;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  FUN_00454081();
  piStack_40 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_44 = (undefined1 *)0x6ff5f5;
  iVar3 = FUN_00402bc3();
  puStack_44 = (undefined1 *)piStack_40;
  if (iVar3 < 0) {
    puStack_44 = (undefined1 *)0x6ff600;
    piStack_40 = (int *)iVar3;
    FUN_00878dfb();
    puStack_44 = extraout_ECX;
  }
  if ((*(char **)(unaff_EBP + 0xc) != (char *)0x0) && (**(char **)(unaff_EBP + 0xc) != '\0')) {
    piStack_40 = (int *)&DAT_0097812c;
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_44;
    FUN_00679e4e(&puStack_44,0x64b);
    iVar3 = unaff_EBP + -0x3c;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0040263d(iVar3);
    puStack_44 = (undefined1 *)FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_44 = (undefined1 *)FUN_004343c5();
    piStack_40 = (int *)0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_00454081();
    piStack_40 = (int *)(unaff_EBP + -0x14);
    puStack_44 = (undefined1 *)0xffffffff;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_004655d4();
    puStack_44 = (undefined1 *)0x6ff674;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_40 = (int *)0x6ff680;
    FUN_00414ebb();
    piStack_40 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_44 = (undefined1 *)0x6ff68d;
    piStack_40 = (int *)FUN_00402bc3();
    if ((int)piStack_40 < 0) {
      puStack_44 = (undefined1 *)0x6ff698;
      FUN_00878dfb();
    }
    piStack_40 = (int *)(unaff_EBP + 0xc);
    puStack_44 = (undefined1 *)0xffffffff;
    FUN_004655d4();
    puStack_44 = (undefined1 *)0x6ff6ad;
    FUN_00414f8b();
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  piStack_40 = (int *)(unaff_EBP + -0x10);
  *puVar1 = 0;
  puStack_44 = (undefined1 *)0x6ff6bd;
  FUN_004725b8();
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_40 = (int *)0x6ff6cc;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_40 = (int *)0x6ff6d8;
  FUN_0045f10c();
  piStack_40 = *(int **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_40 != (int *)0x0) {
    puStack_44 = (undefined1 *)0x6ff6e8;
    (**(code **)(*piStack_40 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


