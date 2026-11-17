/* FUN_00878a40 - 0x00878a40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00878a40(void)

{
  HANDLE hFile;
  int iVar1;
  byte *pbVar2;
  int extraout_ECX;
  DWORD unaff_retaddr;
  LPCSTR in_stack_00001008;
  uint *in_stack_0000100c;
  
  FUN_0087a1b0();
  *in_stack_0000100c = 0xffffffff;
  if ((in_stack_00001008 == (LPCSTR)0x0) || (*in_stack_00001008 == '\0')) {
    *(undefined4 *)(extraout_ECX + 0x400) = 1;
    return 0;
  }
  hFile = CreateFileA(in_stack_00001008,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    *(undefined4 *)(extraout_ECX + 0x400) = 2;
    return 0;
  }
  iVar1 = ReadFile(hFile,&stack0x00000004,0x1000,(LPDWORD)&stack0x00000000,(LPOVERLAPPED)0x0);
  do {
    if (iVar1 == 0) {
LAB_00878b1f:
      *(undefined4 *)(extraout_ECX + 0x400) = 3;
LAB_00878b29:
      CloseHandle(hFile);
      *in_stack_0000100c = ~*in_stack_0000100c;
      return 1;
    }
    if (unaff_retaddr == 0) {
      if (iVar1 != 0) goto LAB_00878b29;
      goto LAB_00878b1f;
    }
    for (pbVar2 = &stack0x00000004; pbVar2 < &stack0x00000004 + unaff_retaddr; pbVar2 = pbVar2 + 1)
    {
      *in_stack_0000100c =
           *(uint *)(extraout_ECX + (uint)(byte)((byte)*in_stack_0000100c ^ *pbVar2) * 4) ^
           *in_stack_0000100c >> 8;
    }
    iVar1 = ReadFile(hFile,&stack0x00000004,0x1000,(LPDWORD)&stack0x00000000,(LPOVERLAPPED)0x0);
  } while( true );
}


