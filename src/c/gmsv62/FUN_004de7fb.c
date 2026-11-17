/* FUN_004de7fb - 0x004de7fb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004de7fb(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_007d1e08();
  iVar1 = param_1[0x29];
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x3c))();
  }
  else if (iVar1 == 1) {
    if (iVar2 != param_1[0x2a] && -1 < iVar2 - param_1[0x2a]) {
      param_1[0x29] = 2;
    }
  }
  else if (iVar1 == 2) {
    if ((param_1[0x2c] != 0) ||
       ((param_1[0x21] != 0 && (iVar2 != param_1[0x2b] && -1 < iVar2 - param_1[0x2b])))) {
      if (param_1[0x2e] == 0) {
        FUN_004dec40();
      }
      FUN_004de8d8(1);
    }
  }
  else if (iVar1 == 3) {
    if (iVar2 != param_1[0x2a] && -1 < iVar2 - param_1[0x2a]) {
      param_1[0x29] = 4;
    }
  }
  else if (iVar1 == 4) {
    (**(code **)(*param_1 + 0x40))();
  }
  else if (iVar1 == 5) {
    (**(code **)(*param_1 + 0x34))(1);
    (**(code **)(*param_1 + 0x38))();
    return;
  }
  FUN_008162ff();
  return;
}


