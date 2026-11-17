/* FUN_0087d22b - 0x0087d22b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


ushort * FUN_0087d22b(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  bool bVar4;
  void *local_c;
  
  local_c = (void *)0x0;
  if (DAT_0098079c == 0) {
    uVar1 = *param_1;
    puVar3 = param_1;
    while (uVar1 != 0) {
      uVar1 = *puVar3;
      if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
        *puVar3 = uVar1 + 0x20;
      }
      puVar3 = puVar3 + 1;
      uVar1 = *puVar3;
    }
  }
  else {
    InterlockedIncrement(&DAT_00982008);
    bVar4 = DAT_00982004 == 0;
    if (!bVar4) {
      InterlockedDecrement(&DAT_00982008);
      FUN_0087d9ec(0x13);
    }
    if (DAT_0098079c == 0) {
      if (bVar4) {
        InterlockedDecrement(&DAT_00982008);
      }
      else {
        FUN_0087da4d(0x13);
      }
      uVar1 = *param_1;
      puVar3 = param_1;
      while (uVar1 != 0) {
        uVar1 = *puVar3;
        if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
          *puVar3 = uVar1 + 0x20;
        }
        puVar3 = puVar3 + 1;
        uVar1 = *puVar3;
      }
    }
    else {
      iVar2 = FUN_00885b02(DAT_0098079c,0x100,param_1,0xffffffff,0,0,0);
      if (((iVar2 != 0) && (local_c = _malloc(iVar2 * 2), local_c != (void *)0x0)) &&
         (iVar2 = FUN_00885b02(DAT_0098079c,0x100,param_1,0xffffffff,local_c,iVar2,0), iVar2 != 0))
      {
        FUN_0087d1db(param_1,local_c);
      }
      if (bVar4) {
        InterlockedDecrement(&DAT_00982008);
      }
      else {
        FUN_0087da4d(0x13);
      }
      FUN_0087aa78(local_c);
    }
  }
  return param_1;
}


