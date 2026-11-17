/* FUN_0059be91 - 0x0059be91 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0059be91(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  char *pcStack_138;
  int iStack_134;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_134 = *(undefined4 *)(unaff_EBP + 8);
  pcStack_138 = s_Maple_MediaList_00965a3c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00434e21(unaff_EBP + -0x10,s__s__s_00965a34);
  iStack_134 = *(undefined4 *)(unaff_EBP + 8);
  pcStack_138 = *(char **)(extraout_ECX + 0x14);
  FUN_00434e21(unaff_EBP + -0x14,s__s__s_00965988);
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    iStack_134 = unaff_EBP + -0x2c;
    *(char ***)(unaff_EBP + 0xc) = &pcStack_138;
    FUN_00450368(unaff_EBP + -0x14);
    FUN_0059c0e3();
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  iStack_134 = 1;
  pcStack_138 = (char *)0x2;
  iVar1 = FtpOpenFileA(*(undefined4 *)(extraout_ECX + 0x10),*(undefined4 *)(unaff_EBP + -0x10),
                       0x80000000);
  if (iVar1 == 0) {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
    }
    uVar2 = 0;
    goto LAB_0059c0d2;
  }
  uVar2 = FtpGetFileSize(iVar1,0);
  *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
  InternetCloseHandle(iVar1);
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  SHGetSpecialFolderPathA((HWND)0x0,(LPSTR)(unaff_EBP + -0x130),0x1a,1);
  FUN_00434e21(unaff_EBP + -0x20,&DAT_00964da0,unaff_EBP + -0x130);
  FUN_00434e21(unaff_EBP + -0x1c,&DAT_00965a24,unaff_EBP + -0x130,s__Nexon_00965a2c);
  FUN_00434e21(unaff_EBP + -0x18,&DAT_00965a24,unaff_EBP + -0x130,s__Nexon_MapleStory_00965a10);
  FUN_00434e21(unaff_EBP + -0x28,&DAT_00965a24,unaff_EBP + -0x130,
               s__Nexon_MapleStory_MapleTV_009659f4);
  CreateDirectoryA(*(LPCSTR *)(unaff_EBP + -0x20),(LPSECURITY_ATTRIBUTES)0x0);
  CreateDirectoryA(*(LPCSTR *)(unaff_EBP + -0x1c),(LPSECURITY_ATTRIBUTES)0x0);
  CreateDirectoryA(*(LPCSTR *)(unaff_EBP + -0x18),(LPSECURITY_ATTRIBUTES)0x0);
  CreateDirectoryA(*(LPCSTR *)(unaff_EBP + -0x28),(LPSECURITY_ATTRIBUTES)0x0);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  uVar2 = *(undefined4 *)(extraout_ECX + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00434e21(unaff_EBP + -0x24,s__s__s_00965988,uVar2,*(undefined4 *)(unaff_EBP + 8));
  if (*(int *)(unaff_EBP + -0x2c) == *(int *)(unaff_EBP + 0xc)) {
LAB_0059c06e:
    uVar2 = 1;
  }
  else {
    iVar1 = FtpGetFileA(*(undefined4 *)(extraout_ECX + 0x10),*(undefined4 *)(unaff_EBP + -0x10),
                        *(undefined4 *)(unaff_EBP + -0x24),0,0,0x80000000,0);
    if (iVar1 != 0) goto LAB_0059c06e;
    GetLastError();
    uVar2 = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
LAB_0059c0d2:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


