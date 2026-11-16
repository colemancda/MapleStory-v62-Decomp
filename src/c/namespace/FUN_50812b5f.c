/* FUN_50812b5f - 0x50812b5f in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_50812b5f(undefined4 *param_1)

{
  if ((int *)param_1[5] != (int *)0x0) {
    FUN_508040b6((int *)param_1[5]);
    param_1[5] = 0;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    FUN_508040b6((int *)param_1[2]);
    param_1[2] = 0;
  }
  *param_1 = &PTR_LAB_50818c7c;
  return;
}


