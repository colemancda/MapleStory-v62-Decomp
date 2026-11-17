/* ptr_00499f54 - 0x00499f54 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall ptr_00499f54(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
  }
  if ((iVar1 != 0) && (param_2 == 0)) {
    FUN_00818111(-(uint)(param_1 != 4) & param_1);
    FUN_00499e9b();
    FUN_008161f1(0);
  }
  return iVar1;
}


