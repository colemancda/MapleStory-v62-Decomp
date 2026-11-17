/* FUN_00888c07 - 0x00888c07 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_00888c07(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if ((param_2 & 8) != 0) {
    bVar4 = 0x20;
  }
  if ((param_2 & 0x4000) != 0) {
    bVar4 = bVar4 | 0x80;
  }
  if ((param_2 & 0x80) != 0) {
    bVar4 = bVar4 | 0x10;
  }
  DVar1 = GetFileType(param_1);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_0087fc11(DVar1);
  }
  else {
    if (DVar1 == 2) {
      bVar4 = bVar4 | 0x40;
    }
    else if (DVar1 == 3) {
      bVar4 = bVar4 | 8;
    }
    uVar2 = FUN_008889a7();
    if (uVar2 != 0xffffffff) {
      FUN_00888aca(uVar2,param_1);
      *(byte *)((&DAT_00980ee0)[(int)uVar2 >> 5] + 4 + (uVar2 & 0x1f) * 0x24) = bVar4 | 1;
      FUN_00888d0d(uVar2);
      return uVar2;
    }
    puVar3 = (undefined4 *)FUN_0087fc84();
    *puVar3 = 0x18;
    puVar3 = (undefined4 *)FUN_0087fc8d();
    *puVar3 = 0;
  }
  return 0xffffffff;
}


