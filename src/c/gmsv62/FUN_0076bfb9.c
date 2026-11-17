/* FUN_0076bfb9 - 0x0076bfb9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0076bfb9(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar2;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 0xc) + -6;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x14) =
       *(int *)(unaff_EBP + 0x14) * 0x21 + -0x35 + *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_0076c0f6(unaff_EBP + 0x14,extraout_ECX + 0x40,unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414f8b(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  if ((*(char **)(unaff_EBP + 0xc) != (char *)0x0) && (**(char **)(unaff_EBP + 0xc) != '\0')) {
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00414f8b(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    goto LAB_0076c0d7;
  }
  uVar1 = FUN_0076c0f6(unaff_EBP + 0x14,extraout_ECX + 0x44,unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414f8b(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  if ((*(char **)(unaff_EBP + 0xc) == (char *)0x0) || (**(char **)(unaff_EBP + 0xc) == '\0')) {
    uVar1 = FUN_0076c0f6(unaff_EBP + 0x14,extraout_ECX + 0x48,unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414f8b(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    if ((*(char **)(unaff_EBP + 0xc) != (char *)0x0) && (**(char **)(unaff_EBP + 0xc) != '\0'))
    goto LAB_0076c0af;
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
  }
  else {
LAB_0076c0af:
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00414f8b(unaff_EBP + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
LAB_0076c0d7:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


