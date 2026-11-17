/* FUN_0066f4b5 - 0x0066f4b5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0066f4b5(int *param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  ulonglong local_c;
  
  iVar3 = FUN_00413367(param_4 + 0xf0,*(undefined4 *)(param_4 + 0xf8));
  param_4 = FUN_00662a40(param_2);
  param_4 = param_4 + iVar3;
  if (param_4 < 1) {
    param_4 = 0;
  }
  if (0x3e6 < param_4) {
    param_4 = 999;
  }
  iVar3 = FUN_00413367(param_3 + 0xc,*(undefined4 *)(param_3 + 0x14));
  if (iVar3 < *param_1) {
    iVar3 = FUN_00413367(param_3 + 0xc,*(undefined4 *)(param_3 + 0x14));
    param_4 = param_4 - (*param_1 - iVar3) / 2;
    if (param_4 < 1) {
      param_4 = 0;
    }
  }
  dVar1 = (double)param_4;
  param_4 = param_1[0x1a] + param_1[0x19];
  if (param_4 < 1) {
    param_4 = 0;
  }
  if (0x3e6 < param_4) {
    param_4 = 999;
  }
  dVar1 = (dVar1 / ((double)param_4 * _DAT_008ed810)) * _DAT_008e9978;
  iVar3 = FUN_00413367(param_3 + 0x18,*(undefined4 *)(param_3 + 0x20));
  if (iVar3 / 100 == 4) {
    dVar2 = _DAT_008ecb30;
    if (_DAT_008ecb30 < dVar1) {
      dVar2 = dVar1;
    }
    if (_DAT_008ed7f8 <= dVar2) {
      dVar2 = _DAT_008ed7f8;
    }
  }
  else {
    dVar2 = _DAT_008ed808;
    if (_DAT_008ed808 < dVar1) {
      dVar2 = dVar1;
    }
    if (_DAT_008ed800 <= dVar2) {
      dVar2 = _DAT_008ed800;
    }
  }
  local_c = (ulonglong)(param_5 % 10000000);
  return (double)local_c * _DAT_008ed738 < dVar2;
}


