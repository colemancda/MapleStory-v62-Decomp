/* FUN_004a077d - 0x004a077d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004a077d(void)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x84);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (((iVar2 == 0) || (pcVar1 = *(char **)(unaff_EBP + 0xc), pcVar1 == (char *)0x0)) ||
     (*pcVar1 == '\0')) {
    puVar4 = *(undefined4 **)(unaff_EBP + 8);
    *puVar4 = 0;
    FUN_00414f8b(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    while( true ) {
      if (pcVar1 == (char *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(pcVar1 + -4);
      }
      if (iVar2 <= *(int *)(unaff_EBP + -0x10)) break;
      sVar3 = _strlen((char *)&DAT_009645b0);
      FUN_0045efbb(&DAT_009645b0,sVar3);
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      pcVar1 = *(char **)(unaff_EBP + 0xc);
    }
    puVar4 = *(undefined4 **)(unaff_EBP + 8);
    *puVar4 = 0;
    FUN_00414f8b(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar4;
}


