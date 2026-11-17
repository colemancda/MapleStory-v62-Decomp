/* FUN_0047c541 - 0x0047c541 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047c541(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar2 = *(int *)(extraout_ECX + 0x90);
  iVar3 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + -4);
  }
  if (0 < iVar2) {
    do {
      iVar1 = FUN_0045ec92(unaff_EBP + 8);
      if (iVar1 != 0) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
    if (iVar3 < iVar2) {
      FUN_00472621(*(int *)(extraout_ECX + 0x90) + iVar3 * 4);
    }
  }
  FUN_0047c06f();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


