/* FUN_50803041 - 0x50803041 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50803041(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 7;
  *(undefined4 *)(extraout_ECX + 0x40) = &PTR_FUN_5081747c;
  FUN_50804352(extraout_ECX + 0x40);
  if (*(int **)(extraout_ECX + 0x3c) != (int *)0x0) {
    FUN_508040b6(*(int **)(extraout_ECX + 0x3c));
    *(undefined4 *)(extraout_ECX + 0x3c) = 0;
  }
  if (*(int **)(extraout_ECX + 0x38) != (int *)0x0) {
    FUN_508040b6(*(int **)(extraout_ECX + 0x38));
    *(undefined4 *)(extraout_ECX + 0x38) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(extraout_ECX + 0x20) = &PTR_FUN_50817480;
  FUN_50804352(extraout_ECX + 0x20);
  piVar1 = *(int **)(extraout_ECX + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  iVar2 = *(int *)(extraout_ECX + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 != 0) {
    FUN_508032a9(extraout_ECX + 8);
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_50802e9e();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50802220();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_508021d0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


