/* FUN_5080d4a1 - 0x5080d4a1 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080d4a1(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x20);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_5080c740((void *)(iVar1 + 8));
    if (*(undefined4 **)(extraout_ECX + 0x20) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(extraout_ECX + 0x20))(1);
    }
    *(undefined4 *)(extraout_ECX + 0x20) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50810b7d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


