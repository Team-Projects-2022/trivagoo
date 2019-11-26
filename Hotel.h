#pragma once
#include <string>
using namespace std;



struct Room
{
	int Room_Number;
	int Reservation_Duration;
	bool Singularity;
	bool Has_TV;
	bool Has_Wifi;
	bool reserved;
};

class RoomNode
{
public:
	RoomNode* next;
	Room value;

	RoomNode(Room val);
};

class RoomList
{
public:
	RoomNode* start;
	RoomNode* end;
	int Number_Of_Rooms;
public:
	RoomList();
	void Add_Room_Admin();
	void Update_Room();
	void searchroom(RoomList R);
};




struct Hotel
{
	string Name;
	string Country;
	string Location;
	bool Free_Meals[2];
	string comments;
	int Number_Of_Stars;
	int Number_Of_Rooms;
	double Rate;
	int ID;
	bool Has_Gym;
	bool Has_pool;
	bool Available;
	RoomList roomList;
};


class HotelNode
{
public:
	HotelNode* next;
	Hotel value;

	HotelNode(Hotel val);
};

class HotelList
{

public:
	HotelNode* tail;

	int Number_Of_Hotels;
	HotelNode* head;
	HotelList();
	void Add_hotel_Admin();
	void Update_hotel();
	void Delete_hotel();
	void Display_hotels();
	void search(); // in specific query gym ,pool, free_meals ..
	void filter();
	void searchhotel();
	
};
