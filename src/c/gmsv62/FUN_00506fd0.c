/* FUN_00506fd0 - 0x00506fd0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00506fd0(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar2 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (cVar2 == '\b') {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0xfb0);
    uVar1 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00434e21(unaff_EBP + 8,uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar2 == '\t') {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0xfb1);
    uVar1 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + 8,uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar2 == '\n') {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0xfb2);
    uVar1 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00434e21(unaff_EBP + 8,uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    if (cVar2 != '\v') goto LAB_005070d5;
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xfb3);
    uVar1 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00434e21(unaff_EBP + 8,uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_00414ebb();
  if ((*(char **)(unaff_EBP + 8) != (char *)0x0) && (**(char **)(unaff_EBP + 8) != '\0')) {
    FUN_00471102(unaff_EBP + 8,0xc);
  }
LAB_005070d5:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


