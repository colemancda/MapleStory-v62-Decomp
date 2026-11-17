/* entry - 0x0087c9df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  HMODULE pHVar5;
  undefined4 uVar6;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  undefined4 *local_18;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008f3f28;
  pcStack_10 = ptr_0087b11c;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_009806b8 = DVar1 >> 8 & 0xff;
  _DAT_009806b4 = DVar1 & 0xff;
  _DAT_009806b0 = _DAT_009806b4 * 0x100 + _DAT_009806b8;
  _DAT_009806ac = DVar1 >> 0x10;
  iVar2 = FUN_008800c0(1);
  if (iVar2 == 0) {
    FUN_0087cb0c(0x1c);
  }
  iVar2 = FUN_0087e2ec();
  if (iVar2 == 0) {
    FUN_0087cb0c(0x10);
  }
  local_8 = 0;
  FUN_008854ff();
  DAT_00982250 = GetCommandLineA();
  DAT_009806ec = FUN_008853cd();
  FUN_00885180();
  FUN_008850c7();
  FUN_0087c5e1();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  uVar3 = FUN_0088506f();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  uVar6 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  uVar3 = FUN_008234af(pHVar5,uVar6,uVar3,uVar4);
  FUN_0087c60e(uVar3);
  FUN_0087fdd3(*(undefined4 *)*local_18,local_18);
  return;
}


