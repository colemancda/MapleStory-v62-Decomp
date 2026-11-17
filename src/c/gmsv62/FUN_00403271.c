/* FUN_00403271 - 0x00403271 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00403271(short *param_1,undefined4 param_2,short *param_3)

{
  int iVar1;
  
  if (param_3 == (short *)0x0) {
    param_3 = param_1;
  }
  if ((param_1 != param_3) || ((short)param_2 != *param_1)) {
    iVar1 = FUN_00402bed(param_1,param_3,0,param_2);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
  }
  return;
}


