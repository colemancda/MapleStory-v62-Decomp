/* FUN_0087d53a - 0x0087d53a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


byte * FUN_0087d53a(byte *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 local_3c;
  uint local_38;
  byte *local_34;
  undefined4 local_30;
  int local_2c;
  byte *local_28;
  uint local_24;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008f3f38;
  pcStack_10 = ptr_0087b11c;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc(param_2);
  }
  else {
    if (param_2 == 0) {
      ExceptionList = &local_14;
      FUN_0087aa78(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_0098224c == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < 0xffffffe1) {
            FUN_0087d9ec(9);
            local_8 = 0;
            local_2c = FUN_008802df(param_1);
            if (local_2c != 0) {
              if (param_2 <= DAT_00982244) {
                iVar1 = FUN_00880ae8(local_2c,param_1,param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_00880633(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = *(int *)(param_1 + -4) - 1;
                    uVar2 = local_24;
                    if (param_2 <= local_24) {
                      uVar2 = param_2;
                    }
                    FUN_00879c20(local_28,param_1,uVar2);
                    local_2c = FUN_008802df(param_1);
                    FUN_0088030a(local_2c,param_1);
                  }
                }
                else {
                  local_28 = param_1;
                }
              }
              if (local_28 == (byte *)0x0) {
                if (param_2 == 0) {
                  param_2 = 1;
                }
                param_2 = param_2 + 0xf & 0xfffffff0;
                local_28 = HeapAlloc(DAT_00982248,0,param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = *(int *)(param_1 + -4) - 1;
                  uVar2 = local_24;
                  if (param_2 <= local_24) {
                    uVar2 = param_2;
                  }
                  FUN_00879c20(local_28,param_1,uVar2);
                  FUN_0088030a(local_2c,param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_0087d6c5();
            if (local_2c == 0) {
              if (param_2 == 0) {
                param_2 = 1;
              }
              param_2 = param_2 + 0xf & 0xfffffff0;
              local_28 = HeapReAlloc(DAT_00982248,0,param_1,param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_00980778 == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_00881a55(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_0098224c == 2) {
          ExceptionList = &local_14;
          if (param_2 < 0xffffffe1) {
            if (param_2 == 0) {
              param_2 = 0x10;
              ExceptionList = &local_14;
            }
            else {
              param_2 = param_2 + 0xf & 0xfffffff0;
              ExceptionList = &local_14;
            }
          }
          do {
            local_28 = pbVar3;
            if (param_2 < 0xffffffe1) {
              FUN_0087d9ec(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_0088145c(param_1,&local_3c,&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_00982248,0,param_1,param_2);
              }
              else {
                if (param_2 < DAT_00972454) {
                  iVar1 = FUN_00881824(local_3c,local_30,pbVar3,param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_008814f8(param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint)*pbVar3 << 4;
                      uVar2 = local_38;
                      if (param_2 <= local_38) {
                        uVar2 = param_2;
                      }
                      FUN_00879c20(local_28,param_1,uVar2);
                      FUN_008814b3(local_3c,local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_00982248,0,param_2), local_28 != (byte *)0x0)) {
                  local_38 = (uint)*pbVar3 << 4;
                  uVar2 = local_38;
                  if (param_2 <= local_38) {
                    uVar2 = param_2;
                  }
                  FUN_00879c20(local_28,param_1,uVar2);
                  FUN_008814b3(local_3c,local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_0087d813();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_00980778 == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_00881a55(param_2);
          } while (iVar1 != 0);
        }
        else {
          do {
            pbVar3 = (byte *)0x0;
            if (param_2 < 0xffffffe1) {
              if (param_2 == 0) {
                param_2 = 1;
              }
              param_2 = param_2 + 0xf & 0xfffffff0;
              pbVar3 = HeapReAlloc(DAT_00982248,0,param_1,param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_00980778 == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_00881a55(param_2);
          } while (iVar1 != 0);
        }
      }
    }
    pbVar3 = (byte *)0x0;
  }
  ExceptionList = local_14;
  return pbVar3;
}


