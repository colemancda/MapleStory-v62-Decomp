/* FUN_0086aa90 - 0x0086aa90 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0086aa90(int param_1)

{
  byte *lpBuffer;
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  DWORD nNumberOfBytesToWrite;
  int iVar6;
  int *piVar7;
  DWORD local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_008e7a54;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_008732e0();
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_008743e0();
  piVar7 = (int *)(param_1 + 0x24);
  local_4 = 2;
  if (*piVar7 != -1) {
    GetLocalTime((LPSYSTEMTIME)(param_1 + 0x1040));
    if ((*(uint *)(param_1 + 0x1460) == 0) ||
       (puVar2 = &DAT_0096d790, *(uint *)(param_1 + 0x1464) <= *(uint *)(param_1 + 0x1460))) {
      puVar2 = &DAT_00978474;
    }
    lpBuffer = (byte *)(param_1 + 0x40);
    uVar3 = FUN_00875010(&DAT_0096d738,((LPSYSTEMTIME)(param_1 + 0x1040))->wYear,
                         *(undefined2 *)(param_1 + 0x1042),*(undefined2 *)(param_1 + 0x1046),
                         *(undefined2 *)(param_1 + 0x1048),*(undefined2 *)(param_1 + 0x104a),
                         *(undefined2 *)(param_1 + 0x104c),*(undefined2 *)(param_1 + 0x104e),puVar2)
    ;
    FUN_00879f55(lpBuffer,uVar3);
    uVar5 = 0xffffffff;
    pbVar4 = lpBuffer;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    nNumberOfBytesToWrite = ~uVar5 - 1;
    if (*(int *)(param_1 + 0x145c) == 0) {
      FUN_008749c0(param_1 + 0x1054,nNumberOfBytesToWrite,lpBuffer,lpBuffer);
    }
    else if (0 < (int)nNumberOfBytesToWrite) {
      pbVar4 = lpBuffer;
      do {
        iVar6 = *(int *)(param_1 + 0x145c) + 2;
        *(int *)(param_1 + 0x145c) = iVar6;
        *pbVar4 = *pbVar4 ^ (char)iVar6 + 0x43U;
        pbVar4 = pbVar4 + 1;
      } while ((int)(pbVar4 + (-0x1c - (int)piVar7)) < (int)nNumberOfBytesToWrite);
    }
    if (*(int *)(param_1 + 0x1460) != 999) {
      WriteFile((HANDLE)*piVar7,lpBuffer,nNumberOfBytesToWrite,&local_10,(LPOVERLAPPED)0x0);
    }
    SetEndOfFile((HANDLE)*piVar7);
    CloseHandle((HANDLE)*piVar7);
    *piVar7 = -1;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  ExceptionList = local_c;
  return;
}


