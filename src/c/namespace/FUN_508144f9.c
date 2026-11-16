/* FUN_508144f9 - 0x508144f9 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_508144f9(void)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar2 = *(int *)(extraout_ECX + 0x48);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 != 0) {
    FUN_508032a9(extraout_ECX + 0x44);
    *(undefined4 *)(extraout_ECX + 0x48) = 0;
  }
  puVar1 = (undefined4 *)(extraout_ECX + 8);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  *puVar1 = &PTR_FUN_50818a80;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_5080c740(puVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_5080fbb9((int *)(extraout_ECX + 0x38));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *puVar1 = &PTR_LAB_50818a5c;
  return;
}


