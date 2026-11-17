/* FUN_00874150 - 0x00874150 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00874150(int param_1)

{
  PHANDLE ppvVar1;
  HANDLE pvVar2;
  BOOL BVar3;
  HANDLE pvVar4;
  HANDLE pvVar5;
  LPHANDLE lpTargetHandle;
  LPHANDLE lpTargetHandle_00;
  DWORD DVar6;
  DWORD DVar7;
  _SECURITY_ATTRIBUTES local_c;
  
  lpTargetHandle_00 = (LPHANDLE)(param_1 + 4);
  if (*(int *)(param_1 + 4) != -1) {
    return 0;
  }
  local_c.nLength = 0xc;
  local_c.bInheritHandle = 1;
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  pvVar2 = GetStdHandle(0xfffffff5);
  *(HANDLE *)(param_1 + 0x1638) = pvVar2;
  ppvVar1 = (PHANDLE)(param_1 + 0x1644);
  BVar3 = CreatePipe(ppvVar1,(PHANDLE)(param_1 + 0x1648),&local_c,0);
  if (BVar3 == 0) {
    return 0;
  }
  BVar3 = SetStdHandle(0xfffffff5,*(PHANDLE)(param_1 + 0x1648));
  if (BVar3 == 0) {
    return 0;
  }
  DVar7 = 2;
  BVar3 = 0;
  lpTargetHandle = (LPHANDLE)(param_1 + 8);
  DVar6 = 0;
  pvVar4 = GetCurrentProcess();
  pvVar2 = *ppvVar1;
  pvVar5 = GetCurrentProcess();
  BVar3 = DuplicateHandle(pvVar5,pvVar2,pvVar4,lpTargetHandle,DVar6,BVar3,DVar7);
  if (BVar3 == 0) {
    return 0;
  }
  CloseHandle(*ppvVar1);
  pvVar2 = GetStdHandle(0xfffffff6);
  *(HANDLE *)(param_1 + 0x1634) = pvVar2;
  ppvVar1 = (PHANDLE)(param_1 + 0x1640);
  BVar3 = CreatePipe((PHANDLE)(param_1 + 0x163c),ppvVar1,&local_c,0);
  if (BVar3 == 0) {
    return 0;
  }
  BVar3 = SetStdHandle(0xfffffff6,*(PHANDLE)(param_1 + 0x163c));
  if (BVar3 == 0) {
    return 0;
  }
  DVar7 = 2;
  BVar3 = 0;
  DVar6 = 0;
  pvVar4 = GetCurrentProcess();
  pvVar2 = *ppvVar1;
  pvVar5 = GetCurrentProcess();
  BVar3 = DuplicateHandle(pvVar5,pvVar2,pvVar4,lpTargetHandle_00,DVar6,BVar3,DVar7);
  if (BVar3 == 0) {
    return 0;
  }
  CloseHandle(*ppvVar1);
  return 1;
}


