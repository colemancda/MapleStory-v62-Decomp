/* FUN_00591cf6 - 0x00591cf6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_00591cf6(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  iVar1 = FUN_00593123();
  if (iVar1 != 0) {
    local_c = param_4;
    local_8 = param_5;
    if (param_2 == 0x201) {
      iVar1 = FUN_005930c8(&local_c);
      if (-1 < iVar1) {
        FUN_00592fe6(iVar1);
      }
    }
    else if (param_2 == 0x203) {
      iVar1 = FUN_005930c8(&local_c);
      if (-1 < iVar1) {
        FUN_00592fe6(iVar1);
        FUN_00593031(*(undefined4 *)(param_1 + 0xd0));
      }
    }
  }
  return;
}


