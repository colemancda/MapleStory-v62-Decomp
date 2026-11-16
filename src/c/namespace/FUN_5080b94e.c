/* FUN_5080b94e - 0x5080b94e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080b94e(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  piVar1 = *(int **)(extraout_ECX + 0x38);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    FUN_508040b6(piVar1);
    *(undefined4 *)(extraout_ECX + 0x38) = 0;
  }
  if (*(int **)(extraout_ECX + 0x34) != (int *)0x0) {
    FUN_508040b6(*(int **)(extraout_ECX + 0x34));
    *(undefined4 *)(extraout_ECX + 0x34) = 0;
  }
  iVar2 = FUN_508037a7((short *)(extraout_ECX + 0x24));
  if (iVar2 < 0) {
    FUN_5080dfed(iVar2);
  }
  iVar2 = *(int *)(extraout_ECX + 0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 != 0) {
    FUN_508032a9(extraout_ECX + 0x14);
    *(undefined4 *)(extraout_ECX + 0x18) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_5080b0dd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


