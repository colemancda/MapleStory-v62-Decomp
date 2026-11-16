/* FUN_50808487 - 0x50808487 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50808487(int param_1,int *param_2)

{
  int iVar1;
  void *this;
  
  iVar1 = FUN_508086f1((void *)(param_1 + 4),param_2,(undefined4 *)0x0);
  if (iVar1 == 0) {
    FUN_50808740((void *)(param_1 + 4),param_2,(undefined4 *)0x0);
    this = (void *)FUN_50808827((void *)(param_1 + 0x1c));
    FUN_50803d5b(this,param_2);
  }
  return;
}


