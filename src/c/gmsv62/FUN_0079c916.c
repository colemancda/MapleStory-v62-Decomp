/* FUN_0079c916 - 0x0079c916 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0079c916(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(extraout_ECX + 0x16fc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0xfa7);
    uVar2 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + -0x10,uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    if (iVar1 != 1) goto LAB_0079c99c;
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0xfa8);
    uVar2 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00434e21(unaff_EBP + -0x10,uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  FUN_00414ebb();
LAB_0079c99c:
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = 0;
  FUN_00414f8b(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


