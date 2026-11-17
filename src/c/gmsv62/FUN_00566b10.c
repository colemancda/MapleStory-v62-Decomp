/* FUN_00566b10 - 0x00566b10 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00566b10(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  cVar1 = *(char *)(extraout_ECX + 0xd4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (cVar1 == '\0') {
    iVar3 = extraout_ECX + 0x16c + *(int *)(unaff_EBP + 8) * 4;
  }
  else {
    if (cVar1 != '\x01') goto LAB_00566b50;
    iVar3 = extraout_ECX + 400 + *(int *)(unaff_EBP + 8) * 4;
  }
  FUN_0056ad27(iVar3);
LAB_00566b50:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = **(undefined4 **)(unaff_EBP + -0x10);
  FUN_0056ad97();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


