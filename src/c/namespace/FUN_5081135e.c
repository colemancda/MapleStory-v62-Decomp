/* FUN_5081135e - 0x5081135e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_5081135e(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(extraout_ECX + 0x24);
  FUN_508012a1();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0x54) == 0) {
    FUN_5080dfed(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0x54);
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + -0x10) = piVar1;
  iVar2 = (**(code **)(iVar2 + 0x2c))();
  if (iVar2 < 0) {
    FUN_5080dffb(iVar2,*(int **)(unaff_EBP + -0x10),&DAT_5081e4e0);
  }
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffdc;
  FUN_5080dbc8(&stack0xffffffdc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50811f3b((int *)(extraout_ECX + 0x54));
  FUN_5080dc76();
  piVar1 = (int *)(extraout_ECX + 0x28);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x24) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


