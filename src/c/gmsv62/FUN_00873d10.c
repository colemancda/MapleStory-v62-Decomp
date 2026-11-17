/* FUN_00873d10 - 0x00873d10 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00873d10(int param_1,undefined4 param_2,undefined4 param_3)

{
  BOOL BVar1;
  DWORD local_41c;
  BYTE local_418 [5];
  undefined4 local_413;
  undefined4 local_40f;
  undefined2 local_40b;
  undefined1 local_409;
  undefined1 local_408 [1032];
  
  local_41c = 0x10;
  BVar1 = CryptGetHashParam(*(HCRYPTHASH *)(param_1 + 0x40),2,local_418,&local_41c,0);
  if (BVar1 == 0) {
    return 0;
  }
  local_413 = 0;
  local_40f = 0;
  local_40b = 0;
  local_409 = 0;
  FUN_008748d0(local_408,0x10,local_418);
  FUN_008749c0(local_408,param_3,param_2,param_2);
  return 1;
}


