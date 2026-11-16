/* FUN_50805d64 - 0x50805d64 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50805d64(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  puVar1 = *(undefined4 **)(extraout_ECX + 0x54);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if (*(undefined4 **)(extraout_ECX + 0x58) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(extraout_ECX + 0x58))(1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_508037a7((short *)(extraout_ECX + 0x28));
  if (iVar3 < 0) {
    FUN_5080dfed(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_50805dff((int *)(extraout_ECX + 0x24));
  if (*(int **)(extraout_ECX + 0x20) != (int *)0x0) {
    FUN_508040b6(*(int **)(extraout_ECX + 0x20));
    *(undefined4 *)(extraout_ECX + 0x20) = 0;
  }
  piVar2 = *(int **)(extraout_ECX + 0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50805b78();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


