/* FUN_0088ae27 - 0x0088ae27 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0088ae27(byte *param_1,uint param_2,byte *param_3,undefined4 param_4,undefined *param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  uint local_8;
  
  local_8 = param_2;
  InterlockedIncrement(&DAT_00982008);
  bVar4 = DAT_00982004 == 0;
  if (!bVar4) {
    InterlockedDecrement(&DAT_00982008);
    FUN_0087d9ec(0x13);
  }
  pbVar2 = param_3;
  if (param_5 == (undefined *)0x0) {
    param_5 = PTR_PTR_00973684;
  }
  while ((local_8 != 0 && (bVar1 = *pbVar2, bVar1 != 0))) {
    if (bVar1 == 0x25) {
      pbVar3 = pbVar2 + 1;
      bVar1 = *pbVar3;
      if (bVar1 == 0x23) {
        pbVar3 = pbVar2 + 2;
      }
      DAT_00980ec0 = (uint)(bVar1 == 0x23);
      FUN_0088af21(CONCAT31((int3)((uint)&param_1 >> 8),*pbVar3),param_4,&param_1,&local_8,param_5);
    }
    else {
      if (((PTR_DAT_009726f0[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < local_8)) {
        *param_1 = bVar1;
        param_1 = param_1 + 1;
        pbVar2 = pbVar2 + 1;
        local_8 = local_8 - 1;
      }
      *param_1 = *pbVar2;
      param_1 = param_1 + 1;
      local_8 = local_8 - 1;
      pbVar3 = pbVar2;
    }
    pbVar2 = pbVar3 + 1;
  }
  if (bVar4) {
    InterlockedDecrement(&DAT_00982008);
  }
  else {
    FUN_0087da4d(0x13);
  }
  if (local_8 == 0) {
    return 0;
  }
  *param_1 = 0;
  return param_2 - local_8;
}


