/* FUN_5080531f - 0x5080531f in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080531f(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar1 = FUN_508037a7((short *)(extraout_ECX + 4));
  if (iVar1 < 0) {
    FUN_5080dfed(iVar1);
  }
  if ((int *)extraout_ECX[2] != (int *)0x0) {
    FUN_508040b6((int *)extraout_ECX[2]);
    extraout_ECX[2] = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_508177c4;
  return;
}


