/* FUN_00545abf - 0x00545abf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00545abf(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x1174;
  }
  else if (param_2 == 1) {
    uVar1 = 0x1175;
  }
  else if (param_2 == 2) {
    uVar1 = 0x1176;
  }
  else {
    if (param_2 != 3) {
      *param_1 = 0;
      return param_1;
    }
    uVar1 = 0x1177;
  }
  FUN_00679d22(param_1,uVar1);
  return param_1;
}


