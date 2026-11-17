/* FUN_00462138 - 0x00462138 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00462138(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iVar3;
  int iVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  iVar3 = extraout_ECX;
  iVar4 = extraout_ECX;
  FUN_0045cdbc(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,7);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00434e21(unaff_EBP + 8,uVar1,*(undefined4 *)(unaff_EBP + -0x10),iVar3,iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  FUN_007d2aac(*(undefined4 *)(unaff_EBP + 8));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


