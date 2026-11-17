/* FUN_0086ce80 - 0x0086ce80 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0086ce80(int *param_1)

{
  byte *lpBuffer;
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  DWORD nNumberOfBytesToWrite;
  DWORD local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008e7a6b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*param_1 != -1) {
    ExceptionList = &local_c;
    GetLocalTime((LPSYSTEMTIME)(param_1 + 0x407));
    if ((param_1[0x50f] == 0) ||
       (puVar3 = &DAT_0096d790, (uint)param_1[0x510] <= (uint)param_1[0x50f])) {
      puVar3 = &DAT_00978474;
    }
    lpBuffer = (byte *)(param_1 + 7);
    uVar4 = FUN_00875010(&DAT_0096d738,((LPSYSTEMTIME)(param_1 + 0x407))->wYear,
                         *(undefined2 *)((int)param_1 + 0x101e),
                         *(undefined2 *)((int)param_1 + 0x1022),(short)param_1[0x409],
                         *(undefined2 *)((int)param_1 + 0x1026),(short)param_1[0x40a],
                         *(undefined2 *)((int)param_1 + 0x102a),puVar3);
    FUN_00879f55(lpBuffer,uVar4);
    uVar6 = 0xffffffff;
    pbVar5 = lpBuffer;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    nNumberOfBytesToWrite = ~uVar6 - 1;
    if (param_1[0x50e] == 0) {
      FUN_008749c0(param_1 + 0x40c,nNumberOfBytesToWrite,lpBuffer,lpBuffer);
    }
    else if (0 < (int)nNumberOfBytesToWrite) {
      pbVar5 = lpBuffer;
      do {
        iVar2 = param_1[0x50e];
        param_1[0x50e] = iVar2 + 2;
        *pbVar5 = *pbVar5 ^ (char)(iVar2 + 2) + 0x43U;
        pbVar5 = pbVar5 + 1;
      } while ((int)(pbVar5 + (-0x1c - (int)param_1)) < (int)nNumberOfBytesToWrite);
    }
    if (param_1[0x50f] != 999) {
      WriteFile((HANDLE)*param_1,lpBuffer,nNumberOfBytesToWrite,&local_10,(LPOVERLAPPED)0x0);
    }
    SetEndOfFile((HANDLE)*param_1);
    CloseHandle((HANDLE)*param_1);
    *param_1 = -1;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  ExceptionList = local_c;
  return;
}


