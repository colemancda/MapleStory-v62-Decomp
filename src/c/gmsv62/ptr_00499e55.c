/* ptr_00499e55 - 0x00499e55 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_00499e55(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0x201) {
    iVar1 = (**(code **)(*param_1 + 0x20))();
    if (iVar1 != 0) {
      FUN_00499edf();
    }
  }
  else if (param_2 == 0x202) {
    iVar1 = (**(code **)(*param_1 + 0x20))();
    if (iVar1 != 0) {
      param_1[0x11] = (uint)(param_1[0x11] == 0);
      FUN_00499f10();
    }
  }
  return;
}


