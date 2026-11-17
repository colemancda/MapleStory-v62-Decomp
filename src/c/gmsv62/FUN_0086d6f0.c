/* FUN_0086d6f0 - 0x0086d6f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0086d6f0(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[1] != '\0') {
    return 1;
  }
  uVar1 = FUN_00875080(&DAT_0096e120);
  FUN_0086cff0(param_1 + 0x24,uVar1);
  param_1[1] = 1;
  if (param_1[0x20] != '\0') {
    FUN_0086da80();
    param_1[0x20] = 0;
  }
  if (*(HANDLE *)(param_1 + 0x2b84) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x2b84));
    *(undefined4 *)(param_1 + 0x2b84) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x18) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x2b88) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x2b88));
    *(undefined4 *)(param_1 + 0x2b88) = 0;
  }
  if (param_1[0x2b8c] != '\0') {
    FUN_00870730(0);
    FUN_00870540();
  }
  if ((DAT_0096d71c != 0) && (DAT_0097fb24 != 0)) {
    FUN_0086e3a0();
  }
  uVar1 = FUN_00875080(&DAT_0096e108);
  FUN_0086cff0(param_1 + 0x24,uVar1);
  if (DAT_0097fb60 != '\0') {
    iVar2 = FUN_00873e00();
    if (iVar2 != 0) {
      FUN_0086db60();
    }
  }
  if ((*(int *)(param_1 + 0x10) != 0x755) && (param_1[0x2b10] != '\0')) {
    FUN_00870ff0(*(int *)(param_1 + 0x10),param_1 + 0x2b10);
  }
  *param_1 = 0;
  uVar1 = FUN_008743e0();
  return uVar1;
}


