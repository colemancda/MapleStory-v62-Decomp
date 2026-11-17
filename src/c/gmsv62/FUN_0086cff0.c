/* FUN_0086cff0 - 0x0086cff0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0086cff0(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte *lpBuffer;
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  DWORD nNumberOfBytesToWrite;
  int *in_stack_0000100c;
  char *in_stack_00001010;
  
  FUN_0087a1b0();
  if (*in_stack_0000100c != -1) {
    if ((in_stack_0000100c[0x50f] != 0) && (*in_stack_00001010 != '!')) {
      if ((uint)in_stack_0000100c[0x50f] < (uint)in_stack_0000100c[0x510]) {
        return 0;
      }
      in_stack_0000100c[0x510] = in_stack_0000100c[0x510] + 1;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(in_stack_0000100c + 1);
    EnterCriticalSection(lpCriticalSection);
    FUN_0087d009();
    GetLocalTime((LPSYSTEMTIME)(in_stack_0000100c + 0x407));
    if ((FUN_00879f55 != (code)0xcc) && (*WriteFile_exref != (code)0xcc)) {
      lpBuffer = (byte *)(in_stack_0000100c + 7);
      FUN_00875010();
      FUN_00879f55();
      uVar4 = 0xffffffff;
      pbVar3 = lpBuffer;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (bVar1 != 0);
      nNumberOfBytesToWrite = ~uVar4 - 1;
      if (in_stack_0000100c[0x50e] == 0) {
        FUN_008749c0();
      }
      else if (0 < (int)nNumberOfBytesToWrite) {
        pbVar3 = lpBuffer;
        do {
          iVar2 = in_stack_0000100c[0x50e];
          in_stack_0000100c[0x50e] = iVar2 + 2;
          *pbVar3 = *pbVar3 ^ (char)(iVar2 + 2) + 0x43U;
          pbVar3 = pbVar3 + 1;
        } while ((int)(pbVar3 + (-0x1c - (int)in_stack_0000100c)) < (int)nNumberOfBytesToWrite);
      }
      WriteFile((HANDLE)*in_stack_0000100c,lpBuffer,nNumberOfBytesToWrite,(LPDWORD)&stack0x00000004,
                (LPOVERLAPPED)0x0);
      LeaveCriticalSection(lpCriticalSection);
      return 1;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}


