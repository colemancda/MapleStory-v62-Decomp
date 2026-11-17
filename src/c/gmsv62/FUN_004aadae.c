/* FUN_004aadae - 0x004aadae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004aadae(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar5 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00414f8b(extraout_ECX + 0x34);
  iVar2 = *(int *)(unaff_EBP + -0x10);
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar2 + -4);
  }
  iVar4 = *(int *)(extraout_ECX + 0x40);
  *(int *)(extraout_ECX + 0x5c) = iVar4;
  cVar1 = *(char *)(iVar4 + iVar2);
  if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) {
    if (0 < iVar4) {
      while( true ) {
        cVar1 = *(char *)(*(int *)(extraout_ECX + 0x5c) + -1 + iVar2);
        if ((cVar1 == ' ') || (cVar1 == '\t')) break;
        if ((cVar1 == '\r') ||
           ((cVar1 == '\n' ||
            (iVar3 = *(int *)(extraout_ECX + 0x5c) + -1, *(int *)(extraout_ECX + 0x5c) = iVar3,
            iVar3 < 1)))) break;
      }
    }
    if (iVar4 < iVar5) {
      while( true ) {
        cVar1 = *(char *)(*(int *)(extraout_ECX + 0x40) + iVar2);
        if (((cVar1 == ' ') || (cVar1 == '\t')) || (cVar1 == '\r')) break;
        if ((cVar1 == '\n') ||
           (iVar4 = *(int *)(extraout_ECX + 0x40) + 1, *(int *)(extraout_ECX + 0x40) = iVar4,
           iVar5 <= iVar4)) break;
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


