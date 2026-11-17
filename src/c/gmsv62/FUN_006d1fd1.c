/* FUN_006d1fd1 - 0x006d1fd1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006d1fd1(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004becbc(0,0);
  if (iVar1 != 0) {
    FUN_00815de9();
    if (param_1 != 0) {
      (*(code *)**(undefined4 **)(param_1 + 8))(1);
    }
  }
  return;
}


