/* FUN_0087fc96 - 0x0087fc96 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


LPVOID FUN_0087fc96(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint _Size;
  LPVOID local_24;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008f4098;
  pcStack_10 = ptr_0087b11c;
  local_14 = ExceptionList;
  uVar2 = param_1 * param_2;
  uVar3 = uVar2;
  ExceptionList = &local_14;
  if (uVar2 < 0xffffffe1) {
    if (uVar2 == 0) {
      uVar3 = 1;
    }
    uVar3 = uVar3 + 0xf & 0xfffffff0;
    ExceptionList = &local_14;
  }
  do {
    local_24 = (LPVOID)0x0;
    if (uVar3 < 0xffffffe1) {
      if (DAT_0098224c == 3) {
        if (uVar2 <= DAT_00982244) {
          FUN_0087d9ec(9);
          local_8 = 0;
          local_24 = (LPVOID)FUN_00880633(uVar2);
          local_8 = 0xffffffff;
          FUN_0087fd2f();
          _Size = uVar2;
          if (local_24 == (void *)0x0) goto LAB_0087fd83;
LAB_0087fd72:
          _memset(local_24,0,_Size);
        }
LAB_0087fd7e:
        if (local_24 != (LPVOID)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_0098224c != 2) || (DAT_00972454 < uVar3)) goto LAB_0087fd7e;
        FUN_0087d9ec(9);
        local_8 = 1;
        local_24 = (LPVOID)FUN_008814f8(uVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_0087fdb8();
        _Size = uVar3;
        if (local_24 != (void *)0x0) goto LAB_0087fd72;
      }
LAB_0087fd83:
      local_24 = HeapAlloc(DAT_00982248,8,uVar3);
    }
    if (local_24 != (LPVOID)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_00980778 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
    iVar1 = FUN_00881a55(uVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
  } while( true );
}


