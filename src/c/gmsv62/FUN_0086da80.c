/* FUN_0086da80 - 0x0086da80 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0086da80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    return 1;
  }
  iVar1 = param_1 + 0x24;
  uVar2 = FUN_00875080(&DAT_0096e28c);
  FUN_0086cff0(iVar1,uVar2);
  (**(code **)(param_1 + 0x2b94))(*(undefined4 *)(param_1 + 0x2b0c),param_1 + 0x2b38);
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (*(HANDLE *)(param_1 + 0x14) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0x14));
  }
  DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x2b34),2000);
  if (DVar3 == 0x102) {
    uVar2 = FUN_00875080(&DAT_0096e274);
    FUN_0086cff0(iVar1,uVar2);
    TerminateThread(*(HANDLE *)(param_1 + 0x2b34),0);
  }
  CloseHandle(*(HANDLE *)(param_1 + 0x2b34));
  if (*(HMODULE *)(param_1 + 0x2b30) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x2b30));
  }
  *(undefined4 *)(param_1 + 0x2b90) = 0;
  *(undefined4 *)(param_1 + 0x2b94) = 0;
  uVar2 = FUN_00875080(&DAT_0096e260);
  FUN_0086cff0(iVar1,uVar2);
  return 1;
}


