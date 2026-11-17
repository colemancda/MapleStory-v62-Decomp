/* FUN_0087a980 - 0x0087a980 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0087a980(DWORD *param_1)

{
  DWORD *pDVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008f3ed8;
  puStack_10 = &LAB_0087b11c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  pDVar1 = TlsGetValue(DAT_00970210);
  if (pDVar1 != (DWORD *)0x0) {
    pDVar1[0x12] = param_1[0x12];
    pDVar1[0x13] = param_1[0x13];
    FUN_0087e3d8(param_1);
    param_1 = pDVar1;
  }
  BVar2 = TlsSetValue(DAT_00970210,param_1);
  if (BVar2 == 0) {
    __amsg_exit(0x10);
  }
  DVar3 = GetCurrentThreadId();
  *param_1 = DVar3;
  if (PTR_FUN_009700cc != (undefined *)0x0) {
    (*(code *)PTR_FUN_009700cc)();
  }
  local_8 = 0;
  uVar4 = (*(code *)param_1[0x12])(param_1[0x13]);
  FUN_0087aa46(uVar4);
  ExceptionList = local_14;
  return 0;
}


