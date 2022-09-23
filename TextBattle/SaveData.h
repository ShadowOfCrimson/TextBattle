class SaveData {
	private:
		string userName;

	public:
		//setter
		void setUser(string uName) {
			userName = uName;
		}
		//getter
		void getUser() {
			return userName;
		}
};

int main() {
	SaveData pData; //player Data object

	pData.setUser("UserName");//using setter to change value

	cout << pData.getUser() << "\n";//using getter to get value

	return 0;
}